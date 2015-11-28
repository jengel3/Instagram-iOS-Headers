
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGChangeEmailViewControllerDelegate.h>

@protocol IGProfileMegaphoneViewDelegate;
@class NSString, IGLabel, UIView, UIButton, IGSimpleButton;

@interface IGProfileMegaphoneView : UIView <IGChangeEmailViewControllerDelegate> {

	NSString* _megaphoneType;
	id<IGProfileMegaphoneViewDelegate> _delegate;
	IGLabel* _titleLabel;
	IGLabel* _messageLabel;
	UIView* _triangleView;
	UIView* _headerView;
	UIButton* _dismissButton;
	IGSimpleButton* _leftButton;
	IGSimpleButton* _rightButton;
	NSString* _email;

}

@property (nonatomic,copy) NSString * megaphoneType;                                          //@synthesize megaphoneType=_megaphoneType - In the implementation block
@property (assign,nonatomic,__weak) id<IGProfileMegaphoneViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGLabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGLabel * messageLabel;                                          //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIView * triangleView;                                           //@synthesize triangleView=_triangleView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                             //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                        //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) IGSimpleButton * leftButton;                                     //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) IGSimpleButton * rightButton;                                    //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,copy) NSString * email;                                                  //@synthesize email=_email - In the implementation block
-(UIView *)triangleView;
-(void)setTriangleViewCenterOffsetX:(float)arg1 ;
-(void)setTriangleView:(UIView *)arg1 ;
-(void)confirmEmailDismissedWithSuccess:(char)arg1 forEmail:(id)arg2 ;
-(void)dismissMegaphone;
-(void)leftButtonTapped;
-(void)rightButtonTapped;
-(NSString *)megaphoneType;
-(void)setMegaphoneType:(NSString *)arg1 ;
-(void)updateMegaphoneFromDictionary:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGProfileMegaphoneViewDelegate>)arg1 ;
-(id<IGProfileMegaphoneViewDelegate>)delegate;
-(IGLabel *)titleLabel;
-(IGLabel *)messageLabel;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setTitleLabel:(IGLabel *)arg1 ;
-(UIButton *)dismissButton;
-(void)setMessageLabel:(IGLabel *)arg1 ;
-(NSString *)email;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(IGSimpleButton *)leftButton;
-(IGSimpleButton *)rightButton;
-(void)setLeftButton:(IGSimpleButton *)arg1 ;
-(void)setRightButton:(IGSimpleButton *)arg1 ;
@end

