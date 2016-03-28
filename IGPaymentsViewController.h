
#import <UIKit/UIViewController.h>
#import <Instagram/IGHybridWebViewDelegate.h>

@class IGHybridWebView, NSString;

@interface IGPaymentsViewController : UIViewController <IGHybridWebViewDelegate>

@property (nonatomic,readonly) IGHybridWebView * paymentsView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectCloseHybridWebView:(id)arg1 ;
-(IGHybridWebView *)paymentsView;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)prefersNavigationBarHidden;
@end

