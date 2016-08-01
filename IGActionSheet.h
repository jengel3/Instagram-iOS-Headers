
#import <UIKit/UIWindow.h>

@protocol IGActionSheetDelegate;
@class UIView, IGActionGroupView, IGActionView, NSString, NSMutableArray;

@interface IGActionSheet : UIWindow {

	char _actionsShowing;
	UIView* _overlayView;
	IGActionGroupView* _actionGroupView;
	IGActionView* _cancelButton;
	UIView* _headerView;
	NSString* _actionSheetTitle;
	NSMutableArray* _actions;
	id<IGActionSheetDelegate> _actionDelegate;

}

@property (nonatomic,retain) UIView * overlayView;                                         //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) IGActionGroupView * actionGroupView;                          //@synthesize actionGroupView=_actionGroupView - In the implementation block
@property (nonatomic,retain) IGActionView * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSString * actionSheetTitle;                                    //@synthesize actionSheetTitle=_actionSheetTitle - In the implementation block
@property (assign,nonatomic) char actionsShowing;                                          //@synthesize actionsShowing=_actionsShowing - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;                                     //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic,__weak) id<IGActionSheetDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
+(id)sharedIGActionSheet;
-(void)addButtonWithTitle:(id)arg1 style:(int)arg2 ;
-(void)showWithCallback:(/*^block*/id)arg1 ;
-(void)onOverlayTapped;
-(void)configureWithConfiguration:(id)arg1 ;
-(void)addButtonWithTitle:(id)arg1 style:(int)arg2 image:(id)arg3 accessibilityIdentifier:(id)arg4 ;
-(void)setActionSheetTitle:(NSString *)arg1 ;
-(void)showWithDelegate:(id)arg1 ;
-(id)alertActionWithTitle:(id)arg1 style:(int)arg2 image:(id)arg3 accessibilityIdentifier:(id)arg4 ;
-(void)onAppDidBackground;
-(IGActionGroupView *)actionGroupView;
-(char)actionsShowing;
-(void)onActionTapped:(id)arg1 ;
-(NSString *)actionSheetTitle;
-(void)performAnimationVisible:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setActionsShowing:(char)arg1 ;
-(void)hideAndReset;
-(void)cancelAndDismiss;
-(void)hideImmediately;
-(void)setActionGroupView:(IGActionGroupView *)arg1 ;
-(id<IGActionSheetDelegate>)actionDelegate;
-(void)setActionDelegate:(id<IGActionSheetDelegate>)arg1 ;
-(void)show;
-(void)setActions:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(NSMutableArray *)actions;
-(id)rootViewController;
-(void)becomeKeyWindow;
-(IGActionView *)cancelButton;
-(void)setCancelButton:(IGActionView *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

