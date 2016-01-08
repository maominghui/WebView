//
//  ViewController.h
//  WebView
//
//  Created by 茆明辉 on 16/1/8.
//  Copyright © 2016年 com.mmh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIWebViewDelegate,UITextFieldDelegate>
{
    UIActivityIndicatorView *activityIndicator;
}
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UIButton *backBtn;
@property (weak, nonatomic) IBOutlet UIButton *goBtn;

@property (weak, nonatomic) IBOutlet UIButton *refreshBtn;

@property (weak, nonatomic) IBOutlet UITextField *textField;

@end

