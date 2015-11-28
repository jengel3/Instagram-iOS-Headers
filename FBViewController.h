
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBViewControllerDelegate;
@class UIBarButtonItem, UIView, UINavigationBar;

@interface FBViewController : UIViewController {

	char _autoDismiss;
	char _dismissAnimated;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	id<FBViewControllerDelegate> _delegate;
	UIView* _canvasView;
	UINavigationBar* _navigationBar;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIBarButtonItem * cancelButton;                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                       //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic) id<FBViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * canvasView;                                //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) UINavigationBar * navigationBar;                    //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,copy) id handler;                                           //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) char autoDismiss;                                   //@synthesize autoDismiss=_autoDismiss - In the implementation block
@property (assign,nonatomic) char dismissAnimated;                               //@synthesize dismissAnimated=_dismissAnimated - In the implementation block
-(void)setDismissAnimated:(char)arg1 ;
-(char)dismissAnimated;
-(UIView *)canvasView;
-(void)logAppEvents:(char)arg1 ;
-(void)doneButtonPressed:(id)arg1 ;
-(void)setCanvasView:(UIView *)arg1 ;
-(void)setAutoDismiss:(char)arg1 ;
-(void)updateBarForPresentedMode;
-(void)updateBarForNavigationMode;
-(char)autoDismiss;
-(void)presentModallyFromViewController:(id)arg1 animated:(char)arg2 handler:(/*^block*/id)arg3 ;
-(CGRect)contentBounds;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FBViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id<FBViewControllerDelegate>)delegate;
-(UINavigationBar *)navigationBar;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewDidLoad;
-(void)updateBar;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)commonInit;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)cancelButtonPressed:(id)arg1 ;
@end

