
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGMediaViewerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol IGDirectMediaViewerTransitionManagerDelegate;
@class UIImage, UIView, IGDirectContent, IGDirectThreadCellFactory, UIViewController, NSString;

@interface IGDirectMediaViewerTransitionManager : NSObject <IGMediaViewerDelegate, UIViewControllerTransitioningDelegate> {

	char _crossDissolveForDismissal;
	char _useCustomInitialDismissCenter;
	UIImage* _topBarSnapshot;
	UIView* _bottomViewForSnapshot;
	IGDirectContent* _mediaMessage;
	IGDirectThreadCellFactory* _cellFactory;
	UIViewController*<IGDirectMediaViewerTransitionManagerDelegate> _delegate;
	CGPoint _initialCenterForDismiss;

}

@property (nonatomic,readonly) IGDirectContent * mediaMessage;                                                               //@synthesize mediaMessage=_mediaMessage - In the implementation block
@property (nonatomic,__weak,readonly) IGDirectThreadCellFactory * cellFactory;                                               //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController*<IGDirectMediaViewerTransitionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint initialCenterForDismiss;                                                                //@synthesize initialCenterForDismiss=_initialCenterForDismiss - In the implementation block
@property (assign,nonatomic) char useCustomInitialDismissCenter;                                                             //@synthesize useCustomInitialDismissCenter=_useCustomInitialDismissCenter - In the implementation block
@property (nonatomic,retain) UIImage * topBarSnapshot;                                                                       //@synthesize topBarSnapshot=_topBarSnapshot - In the implementation block
@property (nonatomic,retain) UIView * bottomViewForSnapshot;                                                                 //@synthesize bottomViewForSnapshot=_bottomViewForSnapshot - In the implementation block
@property (assign,nonatomic) char crossDissolveForDismissal;                                                                 //@synthesize crossDissolveForDismissal=_crossDissolveForDismissal - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGDirectThreadCellFactory *)cellFactory;
-(IGDirectContent *)mediaMessage;
-(char)crossDissolveForDismissal;
-(CGRect)sourceRectForMediaCell:(id)arg1 fullScreenVCRect:(CGRect)arg2 ;
-(UIView *)bottomViewForSnapshot;
-(void)dismissMediaViewer;
-(void)didTapMediaViewer:(id)arg1 ;
-(void)didEndDraggingMediaViewer:(id)arg1 mediaCenter:(CGPoint)arg2 ;
-(id)initWithMediaMessage:(id)arg1 cellFactory:(id)arg2 delegate:(id)arg3 ;
-(void)presentMediaViewer;
-(void)setBottomViewForSnapshot:(UIView *)arg1 ;
-(void)setCrossDissolveForDismissal:(char)arg1 ;
-(void)setUseCustomInitialDismissCenter:(char)arg1 ;
-(char)useCustomInitialDismissCenter;
-(CGPoint)initialCenterForDismiss;
-(UIImage *)topBarSnapshot;
-(void)setInitialCenterForDismiss:(CGPoint)arg1 ;
-(void)setTopBarSnapshot:(UIImage *)arg1 ;
-(void)dealloc;
-(UIViewController*<IGDirectMediaViewerTransitionManagerDelegate>)delegate;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
@end

