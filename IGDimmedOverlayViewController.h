
#import <UIKit/UIViewController.h>

@protocol IGDimmedOverlayViewControllerDelegate;
@class UIView;

@interface IGDimmedOverlayViewController : UIViewController {

	id<IGDimmedOverlayViewControllerDelegate> _delegate;
	int _statusBarStyle;
	UIView* _grayOverlayView;

}

@property (assign,nonatomic,__weak) id<IGDimmedOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int statusBarStyle;                                                     //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (nonatomic,retain) UIView * grayOverlayView;                                               //@synthesize grayOverlayView=_grayOverlayView - In the implementation block
-(void)grayOverlayViewTapped;
-(UIView *)grayOverlayView;
-(void)setDimmedOverlayAlpha:(float)arg1 ;
-(void)setGrayOverlayView:(UIView *)arg1 ;
-(void)setDelegate:(id<IGDimmedOverlayViewControllerDelegate>)arg1 ;
-(id<IGDimmedOverlayViewControllerDelegate>)delegate;
-(int)statusBarStyle;
-(int)preferredStatusBarStyle;
-(void)setStatusBarStyle:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
@end

