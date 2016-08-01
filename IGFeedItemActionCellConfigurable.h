
@class IGFeedItem, IGPageCellPageControl;


@protocol IGFeedItemActionCellConfigurable <NSObject>
@property (nonatomic,retain) IGFeedItem * feedItem; 
@property (nonatomic,readonly) IGPageCellPageControl * pageControl; 
@property (assign,nonatomic) char sponsoredPostAllowed; 
@property (assign,nonatomic) int accessoryViewType; 
@property (assign,nonatomic,__weak) id<IGFeedItemActionCellConfigurableDelegate> delegate; 
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate; 
@required
-(IGFeedItem *)feedItem;
-(void)setLoggingDelegate:(id)arg1;
-(void)setAccessoryViewType:(int)arg1;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(int)accessoryViewType;
-(void)setCustomizableButtonHidden:(char)arg1 animated:(char)arg2;
-(char)sponsoredPostAllowed;
-(void)setCustomizableButtonPrimaryTitle:(id)arg1 secondaryTitle:(id)arg2;
-(void)setSponsoredPostAllowed:(char)arg1;
-(void)setFeedItem:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGFeedItemActionCellConfigurableDelegate>)delegate;
-(IGPageCellPageControl *)pageControl;

@end

