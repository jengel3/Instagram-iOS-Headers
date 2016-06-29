
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGUFIButtonBarViewProtocol.h>

@protocol IGUFIButtonBarViewDelegate;
@class UIButton, NSString;

@interface IGUFICountButtonBarView : UIView <IGUFIButtonBarViewProtocol> {

	UIButton* _likeButton;
	UIButton* _commentButton;
	UIButton* _viewButton;
	UIButton* _sendButton;
	UIButton* _likeViewCountButton;
	UIButton* _commentCountButton;
	id<IGUFIButtonBarViewDelegate> _delegate;
	int _colorType;
	NSString* _shortLikeCountString;

}

@property (assign,nonatomic) int colorType;                                               //@synthesize colorType=_colorType - In the implementation block
@property (nonatomic,readonly) UIButton * likeButton;                                     //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,readonly) UIButton * commentButton;                                  //@synthesize commentButton=_commentButton - In the implementation block
@property (nonatomic,readonly) UIButton * viewButton;                                     //@synthesize viewButton=_viewButton - In the implementation block
@property (nonatomic,readonly) UIButton * likeViewCountButton;                            //@synthesize likeViewCountButton=_likeViewCountButton - In the implementation block
@property (nonatomic,readonly) UIButton * commentCountButton;                             //@synthesize commentCountButton=_commentCountButton - In the implementation block
@property (nonatomic,copy) NSString * shortLikeCountString;                               //@synthesize shortLikeCountString=_shortLikeCountString - In the implementation block
@property (assign,nonatomic,__weak) id<IGUFIButtonBarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                                     //@synthesize sendButton=_sendButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adjustViewWithConstraintSize:(CGSize)arg1 ;
-(void)updateUFIButtonWithFeedItem:(id)arg1 animated:(char)arg2 ;
-(void)setSendButtonHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 colorType:(int)arg2 ;
-(UIButton *)viewButton;
-(UIButton *)likeViewCountButton;
-(UIButton *)commentButton;
-(UIButton *)commentCountButton;
-(void)onLikeButtonPressed:(id)arg1 ;
-(void)onViewButtonPressed:(id)arg1 ;
-(void)onlikeViewCountButtonPressed:(id)arg1 ;
-(void)onCommentButtonPressed:(id)arg1 ;
-(void)oncommentCountButtonPressed:(id)arg1 ;
-(void)onSendButtonPressed:(id)arg1 ;
-(void)updateTextButton:(id)arg1 withTitle:(id)arg2 ;
-(void)setCommentButtonHidden:(char)arg1 ;
-(NSString *)shortLikeCountString;
-(void)setShortLikeCountString:(NSString *)arg1 ;
-(void)setDelegate:(id<IGUFIButtonBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGUFIButtonBarViewDelegate>)delegate;
-(UIButton *)sendButton;
-(void)setupSubviews;
-(void)setColorType:(int)arg1 ;
-(UIButton *)likeButton;
-(int)colorType;
@end

