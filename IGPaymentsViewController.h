
#import <UIKit/UIViewController.h>
#import <Instagram/IGPaymentsViewDelegate.h>

@class IGPaymentsView, NSString;

@interface IGPaymentsViewController : UIViewController <IGPaymentsViewDelegate>

@property (nonatomic,readonly) IGPaymentsView * paymentsView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectClosePaymentsView:(id)arg1 ;
-(IGPaymentsView *)paymentsView;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

