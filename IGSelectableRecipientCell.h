
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPlainTableViewCell.h>

@class IGDirectThreadAvatarView, UIImageView, UIView;

@interface IGSelectableRecipientCell : IGPlainTableViewCell {

	char _checked;
	char _showSeparator;
	char _showWhiteOverlay;
	char _showEmptyCheckmark;
	IGDirectThreadAvatarView* _profilePictureView;
	UIImageView* _checkmarkView;
	UIView* _lineView;
	UIView* _whiteOverlay;

}

@property (nonatomic,retain) IGDirectThreadAvatarView * profilePictureView;              //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkView;                                //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                          //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UIView * whiteOverlay;                                      //@synthesize whiteOverlay=_whiteOverlay - In the implementation block
@property (assign,nonatomic) char checked;                                               //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) char showSeparator;                                         //@synthesize showSeparator=_showSeparator - In the implementation block
@property (assign,nonatomic) char showWhiteOverlay;                                      //@synthesize showWhiteOverlay=_showWhiteOverlay - In the implementation block
@property (assign,nonatomic) char showEmptyCheckmark;                                    //@synthesize showEmptyCheckmark=_showEmptyCheckmark - In the implementation block
+(UIEdgeInsets)separatorInsets;
-(UIView *)whiteOverlay;
-(char)showWhiteOverlay;
-(void)setWhiteOverlay:(UIView *)arg1 ;
-(void)setShowWhiteOverlay:(char)arg1 ;
-(IGDirectThreadAvatarView *)profilePictureView;
-(void)setProfilePictureView:(IGDirectThreadAvatarView *)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(void)setShowEmptyCheckmark:(char)arg1 ;
-(char)showEmptyCheckmark;
-(void)setUser:(id)arg1 ;
-(void)setShowSeparator:(char)arg1 ;
-(char)showSeparator;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(char)arg1 ;
-(void)prepareForReuse;
-(UIImageView *)checkmarkView;
-(char)checked;
-(UIView *)lineView;
-(void)setCheckmarkView:(UIImageView *)arg1 ;
-(void)setThread:(id)arg1 ;
@end

