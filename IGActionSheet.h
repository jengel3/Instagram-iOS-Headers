
#import <UIKit/UIWindow.h>

@protocol IGActionSheetDelegate;
@class UIView, UIScrollView, UIImageView, UIButton, UILabel, NSMutableArray;

@interface IGActionSheet : UIWindow {

	UIView* _overlayView;
	UIScrollView* _buttonView;
	UIImageView* _backgroundView;
	UIButton* _cancelButton;
	UILabel* _titleLabel;
	UIView* _headerView;
	NSMutableArray* _buttons;
	id<IGActionSheetDelegate> _actionDelegate;

}

@property (nonatomic,retain) UIView * overlayView;                                         //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIScrollView * buttonView;                                    //@synthesize buttonView=_buttonView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttons;                                     //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic,__weak) id<IGActionSheetDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
+(void)addButtonWithTitle:(id)arg1 style:(int)arg2 ;
+(void)showWithCallback:(/*^block*/id)arg1 ;
+(void)showWithDelegate:(id)arg1 ;
+(void)addButtonWithTitle:(id)arg1 style:(int)arg2 image:(id)arg3 accessibilityIdentifier:(id)arg4 ;
+(id)sharedIGActionSheet;
+(void)hideImmediately;
+(void)setTitle:(id)arg1 ;
+(int)tag;
+(void)setTag:(int)arg1 ;
+(void)setHeaderView:(id)arg1 ;
+(void)dismissAnimated:(char)arg1 ;
+(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)addButtonWithTitle:(id)arg1 style:(int)arg2 ;
-(void)showWithDelegate:(id)arg1 ;
-(void)onOverlayTapped;
-(UIScrollView *)buttonView;
-(void)onAppDidBackground;
-(id)buttonWithTitle:(id)arg1 style:(int)arg2 ;
-(void)addButtonWithTitle:(id)arg1 style:(int)arg2 image:(id)arg3 accessibilityIdentifier:(id)arg4 ;
-(id)buttonWithTitle:(id)arg1 style:(int)arg2 image:(id)arg3 accessibilityIdentifier:(id)arg4 ;
-(void)layoutHeaderAndButtons;
-(void)performAnimationVisible:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideAndReset;
-(void)cancelAndDismiss;
-(void)setButtonView:(UIScrollView *)arg1 ;
-(id<IGActionSheetDelegate>)actionDelegate;
-(void)setActionDelegate:(id<IGActionSheetDelegate>)arg1 ;
-(void)show;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)rootViewController;
-(void)becomeKeyWindow;
-(void)buttonTapped:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)backgroundView;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSMutableArray *)buttons;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(void)setButtons:(NSMutableArray *)arg1 ;
@end

