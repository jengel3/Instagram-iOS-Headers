
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGLabelTooltipViewDelegate.h>
#import <Instagram/IGUFIButtonBarViewDelegate.h>
#import <Instagram/IGFeedItemActionCellConfigurable.h>

@protocol IGFeedItemActionCellConfigurableDelegate, IGFeedItemLoggingProviderDelegate, IGUFIButtonBarViewProtocol, IGSponsorableButton;
@class IGFeedItem, IGPageCellPageControl, UIView, UIButton, NSArray, IGLabelTooltipView, NSString;

@interface IGFeedItemActionCell : UICollectionViewCell <IGLabelTooltipViewDelegate, IGUFIButtonBarViewDelegate, IGFeedItemActionCellConfigurable> {

	char _sponsoredPostAllowed;
	IGFeedItem* _feedItem;
	int _accessoryViewType;
	int _ctaLayout;
	id<IGFeedItemActionCellConfigurableDelegate> _delegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	UIView*<IGUFIButtonBarViewProtocol> _ufiButtonBarView;
	UIView* _lineView;
	int _ufiStyle;
	UIButton* _moreButton;
	UIView* _customizableButtonContainer;
	int _customizableButtonCTAState;
	UIButton* _customizableButton;
	UIButton*<IGSponsorableButton> _sponsoredButton;
	IGPageCellPageControl* _pageControl;
	NSArray* _accessibilityElements;
	IGLabelTooltipView* _reshareNUXView;

}

@property (nonatomic,retain) UIView * lineView;                                                         //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,readonly) UIView*<IGUFIButtonBarViewProtocol> ufiButtonBarView;                    //@synthesize ufiButtonBarView=_ufiButtonBarView - In the implementation block
@property (assign,nonatomic) int ufiStyle;                                                              //@synthesize ufiStyle=_ufiStyle - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                                     //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,readonly) UIView * customizableButtonContainer;                                    //@synthesize customizableButtonContainer=_customizableButtonContainer - In the implementation block
@property (assign,nonatomic) int customizableButtonCTAState;                                            //@synthesize customizableButtonCTAState=_customizableButtonCTAState - In the implementation block
@property (nonatomic,retain) UIButton * customizableButton;                                             //@synthesize customizableButton=_customizableButton - In the implementation block
@property (nonatomic,retain) UIButton*<IGSponsorableButton> sponsoredButton;                            //@synthesize sponsoredButton=_sponsoredButton - In the implementation block
@property (nonatomic,retain) IGPageCellPageControl * pageControl;                                       //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) NSArray * accessibilityElements;                                           //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (nonatomic,retain) IGLabelTooltipView * reshareNUXView;                                       //@synthesize reshareNUXView=_reshareNUXView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic) char sponsoredPostAllowed;                                                 //@synthesize sponsoredPostAllowed=_sponsoredPostAllowed - In the implementation block
@property (assign,nonatomic) int accessoryViewType;                                                     //@synthesize accessoryViewType=_accessoryViewType - In the implementation block
@property (assign,nonatomic) int ctaLayout;                                                             //@synthesize ctaLayout=_ctaLayout - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemActionCellConfigurableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
+(float)heightForOrganicFeedItem:(id)arg1 ;
+(float)heightForSponsoredFeedItem:(id)arg1 ctaLayout:(int)arg2 ;
-(IGFeedItem *)feedItem;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)setAccessoryViewType:(int)arg1 ;
-(UIButton *)customizableButton;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)setLineView:(UIView *)arg1 ;
-(id)accessibleElements;
-(int)ufiStyle;
-(void)UFIButtonBarDidTapOnLike:(id)arg1 ;
-(void)UFIButtonBarDidTapOnComment:(id)arg1 ;
-(void)UFIButtonBarDidTapOnSend:(id)arg1 ;
-(void)UFIButtonBarDidTapOnLikeViewCount:(id)arg1 ;
-(void)UFIButtonBarDidTapOnCommentCount:(id)arg1 ;
-(void)UFIButtonBar:(id)arg1 wantsSizeUpdateAnimated:(char)arg2 ;
-(void)setCustomizableButtonHidden:(char)arg1 animated:(char)arg2 ;
-(void)progressCustomizableButtonCTAState;
-(void)updateUFIButtonWithAnimation;
-(void)setUfiStyle:(int)arg1 ;
-(UIView*<IGUFIButtonBarViewProtocol>)ufiButtonBarView;
-(IGLabelTooltipView *)reshareNUXView;
-(int)customizableButtonCTAState;
-(void)setCustomizableButtonCTAState:(int)arg1 ;
-(void)updateCustomizableButtonToCTAState:(int)arg1 ;
-(UIView *)customizableButtonContainer;
-(UIButton*<IGSponsorableButton>)sponsoredButton;
-(void)onMoreButtonPressed;
-(void)pageControlDidChangeValue:(id)arg1 ;
-(void)setCustomizableButton:(UIButton *)arg1 ;
-(int)ctaLayout;
-(void)onCustomizableButtonPressed:(id)arg1 ;
-(char)sponsoredPostAllowed;
-(float)seperatorLineHInset;
-(CGRect)frameForCustomizableButton;
-(void)setReshareNUXView:(IGLabelTooltipView *)arg1 ;
-(void)didTapTooltipView:(id)arg1 ;
-(void)setCustomizableButtonPrimaryTitle:(id)arg1 secondaryTitle:(id)arg2 ;
-(void)setSponsoredPostAllowed:(char)arg1 ;
-(int)accessoryViewType;
-(void)setCtaLayout:(int)arg1 ;
-(void)showReshareNUXWithArrowDirection:(int)arg1 ;
-(void)hideReshareNUX;
-(char)isReshareNUXVisible;
-(void)setSponsoredButton:(UIButton*<IGSponsorableButton>)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setPageControl:(IGPageCellPageControl *)arg1 ;
-(UIButton *)moreButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemActionCellConfigurableDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<IGFeedItemActionCellConfigurableDelegate>)delegate;
-(void)prepareForReuse;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(IGPageCellPageControl *)pageControl;
-(UIView *)lineView;
-(void)setMoreButton:(UIButton *)arg1 ;
@end

