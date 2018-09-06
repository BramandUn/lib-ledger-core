//
//  ViewController.m
//  ledgertestapp
//
//  Created by El Khalil Bellakrid on 12/04/2018.
//  Copyright © 2018 El Khalil Bellakrid. All rights reserved.
//

#import "ViewController.h"
#import <ledger-core-objc/LGSecp256k1.h>
#import <ledger-core-objc/LGLedgerCore.h>
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    //////////Core library test call/////////////
    NSString *version = [LGLedgerCore getStringVersion];
    LGSecp256k1 *secpObj = [LGSecp256k1 createInstance];
    NSData *privKey = [[NSData alloc] initWithContentsOfFile:@"/Users/elkhalilbellakrid/Desktop/Playground_04/lib-ledger-core/ledger-core-samples/objc/ledgertestapp/ledgertestapp/private.txt"];
    NSData *pubKey = [secpObj computePubKey:privKey compress:YES];
    NSLog(@"Private Key: %@", pubKey);
    NSData *newData = [[NSData alloc] initWithBytes:[pubKey bytes] length:[pubKey length]];
    NSString *result = [[NSString alloc] initWithBytes:[pubKey bytes] length:[pubKey length] encoding:NSUTF16StringEncoding];
    [_label setText:result];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
