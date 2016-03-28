
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGFeedItemActionCellDelegate, IGFeedItemLoggingProviderDelegate, IGSponsorableButton;
@class IGFeedItem, UIButton, IGPageCellPageControl, UIView, NSArray, IGToastStyleNUXView;

@interface IGFeedItemActionCell : UICollectionViewCell {

	char _sponsoredPostAllowed;
	IGFeedItem* _feedItem;
	UIButton* _likeButton;
	UIButton* _commentButton;
	UIButton* _moreButton;
	UIButton* _sendButton;
	UIButton* _customizableButton;
	IGPageCellPageControl* _pageControl;
	int _accessoryViewType;
	id<IGFeedItemActionCellDelegate> _delegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	UIView* _lineView;
	UIButton*<IGSponsorableButton> _sponsoredButton;
	NSArray* _accessibilityElements;
	IGToastStyleNUXView* _reshareNUXView;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) UIButton * likeButton;                                                     //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) UIButton * commentButton;                                                  //@synthesize commentButton=_commentButton - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                                     //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,retain) UIButton * sendButton;                                                     //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UIButton * customizableButton;                                             //@synthesize customizableButton=_customizableButton - In the implementation block
@property (nonatomic,retain) IGPageCellPageControl * pageControl;                                       //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic) int accessoryViewType;                                                     //@synthesize accessoryViewType=_accessoryViewType - In the implementation block
@property (assign,nonatomic) char sponsoredPostAllowed;                                                 //@synthesize sponsoredPostAllowed=_sponsoredPostAllowed - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemActionCellDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                         //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UIButton*<IGSponsorableButton> sponsoredButton;                            //@synthesize sponsoredButton=_sponsoredButton - In the implementation block
@property (nonatomic,retain) NSArray * accessibilityElements;                                           //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (nonatomic,retain) IGToastStyleNUXView * reshareNUXView;                                      //@synthesize reshareNUXView=_reshareNUXView - In the implementation block
+(float)height;
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)setSponsoredPostAllowed:(char)arg1 ;
-(void)setAccessoryViewType:(int)arg1 ;
-(void)setCustomizableButtonHidden:(char)arg1 animated:(char)arg2 ;
-(UIButton *)customizableButton;
-(id)accessibleElements;
-(void)setLineView:(UIView *)arg1 ;
-(void)setLikeButton:(UIButton *)arg1 ;
-(void)onCustomizableButtonPressed:(id)arg1 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)setCustomizableButton:(UIButton *)arg1 ;
-(int)accessoryViewType;
-(UIButton *)commentButton;
-(IGToastStyleNUXView *)reshareNUXView;
-(UIButton*<IGSponsorableButton>)sponsoredButton;
-(void)onMoreButtonPressed;
-(void)onCommentButtonPressed:(id)arg1 ;
-(void)pageControlDidChangeValue:(id)arg1 ;
-(void)onSendButtonPressed:(id)arg1 ;
-(void)onLikeButtonPressed:(id)arg1 ;
-(void)updateLikeButton;
-(char)sponsoredPostAllowed;
-(float)seperatorLineHInset;
-(void)setReshareNUXView:(IGToastStyleNUXView *)arg1 ;
-(void)showReshareNUXWithArrowDirection:(int)arg1 ;
-(void)hideReshareNUX;
-(void)setCommentButton:(UIButton *)arg1 ;
-(void)setSponsoredButton:(UIButton*<IGSponsorableButton>)arg1 ;
-(void)setPageControl:(IGPageCellPageControl *)arg1 ;
-(UIButton *)moreButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemActionCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemActionCellDelegate>)delegate;
-(UIEdgeInsets)buttonContentEdgeInsets;
-(void)prepareForReuse;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(IGPageCellPageControl *)pageControl;
-(UIView *)lineView;
-(UIButton *)sendButton;
-(void)setSendButton:(UIButton *)arg1 ;
-(UIButton *)likeButton;
-(void)setMoreButton:(UIButton *)arg1 ;
@end

