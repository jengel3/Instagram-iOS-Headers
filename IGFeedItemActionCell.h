
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGActionSheetDelegate.h>

@protocol IGFeedItemActionCellDelegate, IGFeedItemLoggingProviderDelegate, IGSponsorableButton;
@class IGFeedItem, UIButton, IGPageCellPageControl, UINavigationController, UIView, NSArray, NSString;

@interface IGFeedItemActionCell : UICollectionViewCell <IGActionSheetDelegate> {

	char _sponsoredPostAllowed;
	IGFeedItem* _feedItem;
	UIButton* _likeButton;
	UIButton* _commentButton;
	UIButton* _moreButton;
	UIButton* _sendButton;
	UIButton* _customizableButton;
	IGPageCellPageControl* _pageControl;
	UINavigationController* _navigationController;
	int _accessoryViewType;
	id<IGFeedItemActionCellDelegate> _delegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	UIView* _lineView;
	UIButton*<IGSponsorableButton> _sponsoredButton;
	NSArray* _accessibilityElements;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) UIButton * likeButton;                                                     //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) UIButton * commentButton;                                                  //@synthesize commentButton=_commentButton - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                                     //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,retain) UIButton * sendButton;                                                     //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UIButton * customizableButton;                                             //@synthesize customizableButton=_customizableButton - In the implementation block
@property (nonatomic,retain) IGPageCellPageControl * pageControl;                                       //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;                      //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic) int accessoryViewType;                                                     //@synthesize accessoryViewType=_accessoryViewType - In the implementation block
@property (assign,nonatomic) char sponsoredPostAllowed;                                                 //@synthesize sponsoredPostAllowed=_sponsoredPostAllowed - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemActionCellDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                         //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UIButton*<IGSponsorableButton> sponsoredButton;                            //@synthesize sponsoredButton=_sponsoredButton - In the implementation block
@property (nonatomic,retain) NSArray * accessibilityElements;                                           //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)height;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(id)accessibleElements;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(void)setLikeButton:(UIButton *)arg1 ;
-(float)seperatorLineHInset;
-(void)setAccessoryViewType:(int)arg1 ;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(UIButton *)customizableButton;
-(void)onCustomizableButtonPressed:(id)arg1 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)setCustomizableButton:(UIButton *)arg1 ;
-(int)accessoryViewType;
-(UIButton *)commentButton;
-(UIButton*<IGSponsorableButton>)sponsoredButton;
-(void)onMoreButtonPressed:(id)arg1 ;
-(void)onCommentButtonPressed:(id)arg1 ;
-(void)pageControlDidChangeValue:(id)arg1 ;
-(void)onSendButtonPressed:(id)arg1 ;
-(void)onLikeButtonPressed:(id)arg1 ;
-(void)updateLikeButton;
-(char)sponsoredPostAllowed;
-(void)pushComments;
-(void)setCustomizableButtonHidden:(char)arg1 animated:(char)arg2 ;
-(void)setCommentButton:(UIButton *)arg1 ;
-(void)setSponsoredPostAllowed:(char)arg1 ;
-(void)setSponsoredButton:(UIButton*<IGSponsorableButton>)arg1 ;
-(void)setPageControl:(IGPageCellPageControl *)arg1 ;
-(UIButton *)moreButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemActionCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemActionCellDelegate>)delegate;
-(UIEdgeInsets)buttonContentEdgeInsets;
-(void)prepareForReuse;
-(UINavigationController *)navigationController;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(IGPageCellPageControl *)pageControl;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(UIView *)lineView;
-(UIButton *)sendButton;
-(void)setSendButton:(UIButton *)arg1 ;
-(UIButton *)likeButton;
-(void)setMoreButton:(UIButton *)arg1 ;
@end

