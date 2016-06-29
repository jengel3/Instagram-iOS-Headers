
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGUFIButtonBarViewProtocol.h>

@protocol IGUFIButtonBarViewDelegate;
@class UIButton, NSArray, NSString;

@interface IGUFIWordButtonBarView : UIView <IGUFIButtonBarViewProtocol> {

	char _showLikedButton;
	UIButton* _likeButton;
	UIButton* _commentButton;
	UIButton* _sendButton;
	UIButton* _likeTextButton;
	UIButton* _commentTextButton;
	UIButton* _sendTextButton;
	id<IGUFIButtonBarViewDelegate> _delegate;
	int _colorType;
	NSArray* _accessibilityElements;

}

@property (assign,nonatomic) int colorType;                                               //@synthesize colorType=_colorType - In the implementation block
@property (assign,nonatomic) char showLikedButton;                                        //@synthesize showLikedButton=_showLikedButton - In the implementation block
@property (nonatomic,retain) NSArray * accessibilityElements;                             //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (nonatomic,readonly) UIButton * likeButton;                                     //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,readonly) UIButton * commentButton;                                  //@synthesize commentButton=_commentButton - In the implementation block
@property (nonatomic,readonly) UIButton * likeTextButton;                                 //@synthesize likeTextButton=_likeTextButton - In the implementation block
@property (nonatomic,readonly) UIButton * commentTextButton;                              //@synthesize commentTextButton=_commentTextButton - In the implementation block
@property (nonatomic,readonly) UIButton * sendTextButton;                                 //@synthesize sendTextButton=_sendTextButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGUFIButtonBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                                     //@synthesize sendButton=_sendButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adjustViewWithConstraintSize:(CGSize)arg1 ;
-(void)updateUFIButtonWithFeedItem:(id)arg1 animated:(char)arg2 ;
-(void)setSendButtonHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 colorType:(int)arg2 showLikedButton:(char)arg3 ;
-(UIButton *)commentButton;
-(void)onLikeButtonPressed:(id)arg1 ;
-(void)onCommentButtonPressed:(id)arg1 ;
-(void)onSendButtonPressed:(id)arg1 ;
-(void)setCommentButtonHidden:(char)arg1 ;
-(void)setShowLikedButton:(char)arg1 ;
-(UIButton *)likeTextButton;
-(UIButton *)commentTextButton;
-(UIButton *)sendTextButton;
-(void)onlikeTextButtonPressed:(id)arg1 ;
-(char)showLikedButton;
-(void)onCommentTextButtonPressed:(id)arg1 ;
-(void)onSendTextButtonPressed:(id)arg1 ;
-(void)setFontOnTextButtons:(float)arg1 ;
-(void)setDelegate:(id<IGUFIButtonBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGUFIButtonBarViewDelegate>)delegate;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(UIButton *)sendButton;
-(void)setupSubviews;
-(void)setColorType:(int)arg1 ;
-(UIButton *)likeButton;
-(int)colorType;
@end

