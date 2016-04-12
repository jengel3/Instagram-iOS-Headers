
@class IGFeedItem;


@protocol IGSponsorableButton
@property (assign,nonatomic) char showIcon; 
@property (nonatomic,retain) IGFeedItem * feedItem; 
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate; 
@required
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(id)arg1;
-(void)setLoggingDelegate:(id)arg1;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)setColor:(id)arg1 forState:(unsigned)arg2;
-(char)showIcon;
-(void)setShowIcon:(char)arg1;

@end

