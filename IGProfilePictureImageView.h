
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>

@class IGUser, IGSimpleButton, UIColor;

@interface IGProfilePictureImageView : IGImageView {

	char _buttonDisabled;
	char _hasHighlightedState;
	char _useHDPictureIfAvailable;
	IGUser* _user;
	IGSimpleButton* _profilePicButton;
	int _borderStyle;
	UIColor* _borderColor;
	float _borderWidth;

}

@property (nonatomic,retain) UIColor * borderColor;                            //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) float borderWidth;                                //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) IGUser * user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGSimpleButton * profilePicButton;              //@synthesize profilePicButton=_profilePicButton - In the implementation block
@property (assign,nonatomic) int borderStyle;                                  //@synthesize borderStyle=_borderStyle - In the implementation block
@property (assign,nonatomic) char buttonDisabled;                              //@synthesize buttonDisabled=_buttonDisabled - In the implementation block
@property (assign,nonatomic) char hasHighlightedState;                         //@synthesize hasHighlightedState=_hasHighlightedState - In the implementation block
@property (assign,nonatomic) char useHDPictureIfAvailable;                     //@synthesize useHDPictureIfAvailable=_useHDPictureIfAvailable - In the implementation block
-(void)setDidTap:(char)arg1 ;
-(char)didTap;
-(void)setIsInProfile:(char)arg1 ;
-(char)isInProfile;
-(void)displayProfilePic;
-(void)doubleTapped:(id)arg1 ;
-(void)singleTapped:(id)arg1 ;
-(void)didMoveToSuperview;
-(IGSimpleButton *)profilePicButton;
-(void)setButtonDisabled:(char)arg1 ;
-(void)setHasHighlightedState:(char)arg1 ;
-(void)setUseHDPictureIfAvailable:(char)arg1 ;
-(void)tapped:(id)arg1 ;
-(id)profilePicURLForUser:(id)arg1 ;
-(void)updateHighlightedBackgroundColor;
-(char)buttonDisabled;
-(char)hasHighlightedState;
-(char)useHDPictureIfAvailable;
-(void)userUpdated:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(UIColor *)borderColor;
-(float)borderWidth;
-(void)setIsAccessibilityElement:(char)arg1 ;
-(void)updateImage;
-(int)borderStyle;
@end

