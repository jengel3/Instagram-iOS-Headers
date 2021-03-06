
#import <UIKit/UIView.h>

@class UIBarButtonItem, NSString, UIImage, UIColor, UIImageView;

@interface RCTNavItem : UIView {

	char _navigationBarHidden;
	char _shadowHidden;
	char _translucent;
	UIBarButtonItem* _backButtonItem;
	UIBarButtonItem* _leftButtonItem;
	UIBarButtonItem* _rightButtonItem;
	NSString* _title;
	UIImage* _titleImage;
	UIImage* _leftButtonIcon;
	NSString* _leftButtonTitle;
	UIImage* _rightButtonIcon;
	NSString* _rightButtonTitle;
	UIImage* _backButtonIcon;
	NSString* _backButtonTitle;
	UIColor* _tintColor;
	UIColor* _barTintColor;
	UIColor* _titleTextColor;
	/*^block*/id _onLeftButtonPress;
	/*^block*/id _onRightButtonPress;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * titleImage;                             //@synthesize titleImage=_titleImage - In the implementation block
@property (nonatomic,retain) UIImage * leftButtonIcon;                         //@synthesize leftButtonIcon=_leftButtonIcon - In the implementation block
@property (nonatomic,copy) NSString * leftButtonTitle;                         //@synthesize leftButtonTitle=_leftButtonTitle - In the implementation block
@property (nonatomic,retain) UIImage * rightButtonIcon;                        //@synthesize rightButtonIcon=_rightButtonIcon - In the implementation block
@property (nonatomic,copy) NSString * rightButtonTitle;                        //@synthesize rightButtonTitle=_rightButtonTitle - In the implementation block
@property (nonatomic,retain) UIImage * backButtonIcon;                         //@synthesize backButtonIcon=_backButtonIcon - In the implementation block
@property (nonatomic,copy) NSString * backButtonTitle;                         //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (assign,nonatomic) char navigationBarHidden;                         //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,nonatomic) char shadowHidden;                                //@synthesize shadowHidden=_shadowHidden - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * barTintColor;                           //@synthesize barTintColor=_barTintColor - In the implementation block
@property (nonatomic,retain) UIColor * titleTextColor;                         //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (assign,nonatomic) char translucent;                                 //@synthesize translucent=_translucent - In the implementation block
@property (nonatomic,readonly) UIImageView * titleImageView; 
@property (nonatomic,readonly) UIBarButtonItem * backButtonItem;               //@synthesize backButtonItem=_backButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * leftButtonItem;               //@synthesize leftButtonItem=_leftButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * rightButtonItem;              //@synthesize rightButtonItem=_rightButtonItem - In the implementation block
@property (nonatomic,copy) id onLeftButtonPress;                               //@synthesize onLeftButtonPress=_onLeftButtonPress - In the implementation block
@property (nonatomic,copy) id onRightButtonPress;                              //@synthesize onRightButtonPress=_onRightButtonPress - In the implementation block
-(void)setRightButtonTitle:(NSString *)arg1 ;
-(NSString *)rightButtonTitle;
-(void)setShadowHidden:(char)arg1 ;
-(void)handleLeftButtonPress;
-(void)handleRightButtonPress;
-(void)setBackButtonIcon:(UIImage *)arg1 ;
-(void)setLeftButtonTitle:(NSString *)arg1 ;
-(void)setLeftButtonIcon:(UIImage *)arg1 ;
-(void)setRightButtonIcon:(UIImage *)arg1 ;
-(UIImage *)leftButtonIcon;
-(NSString *)leftButtonTitle;
-(UIImage *)rightButtonIcon;
-(UIImage *)backButtonIcon;
-(id)onLeftButtonPress;
-(void)setOnLeftButtonPress:(id)arg1 ;
-(id)onRightButtonPress;
-(void)setOnRightButtonPress:(id)arg1 ;
-(char)shadowHidden;
-(UIBarButtonItem *)backButtonItem;
-(UIBarButtonItem *)leftButtonItem;
-(UIBarButtonItem *)rightButtonItem;
-(char)navigationBarHidden;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSString *)backButtonTitle;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(void)setTranslucent:(char)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setNavigationBarHidden:(char)arg1 ;
-(UIImageView *)titleImageView;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(UIColor *)titleTextColor;
-(UIImage *)titleImage;
-(void)setTitleImage:(UIImage *)arg1 ;
-(char)translucent;
@end

