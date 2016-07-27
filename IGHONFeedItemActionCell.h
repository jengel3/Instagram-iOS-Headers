
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGFeedItemActionCellConfigurable.h>

@protocol IGFeedItemActionCellConfigurableDelegate, IGFeedItemLoggingProviderDelegate;
@class IGFeedItem, UIButton, IGPageCellPageControl, NSString;

@interface IGHONFeedItemActionCell : UICollectionViewCell <IGFeedItemActionCellConfigurable> {

	char _sponsoredPostAllowed;
	IGFeedItem* _feedItem;
	int _accessoryViewType;
	int _ctaLayout;
	id<IGFeedItemActionCellConfigurableDelegate> _delegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	UIButton* _customizableButton;
	IGPageCellPageControl* _pageControl;

}

@property (nonatomic,retain) UIButton * customizableButton;                                             //@synthesize customizableButton=_customizableButton - In the implementation block
@property (nonatomic,retain) IGPageCellPageControl * pageControl;                                       //@synthesize pageControl=_pageControl - In the implementation block
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
-(IGFeedItem *)feedItem;
-(void)setLoggingDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)setAccessoryViewType:(int)arg1 ;
-(UIButton *)customizableButton;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)setCustomizableButtonHidden:(char)arg1 animated:(char)arg2 ;
-(void)pageControlDidChangeValue:(id)arg1 ;
-(void)setCustomizableButton:(UIButton *)arg1 ;
-(int)ctaLayout;
-(char)sponsoredPostAllowed;
-(void)setCustomizableButtonPrimaryTitle:(id)arg1 secondaryTitle:(id)arg2 ;
-(void)setSponsoredPostAllowed:(char)arg1 ;
-(int)accessoryViewType;
-(void)setCtaLayout:(int)arg1 ;
-(void)setupCustomizableButton;
-(void)setupPageControl;
-(void)customizableButtonTapped:(id)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setPageControl:(IGPageCellPageControl *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemActionCellConfigurableDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGFeedItemActionCellConfigurableDelegate>)delegate;
-(IGPageCellPageControl *)pageControl;
@end

