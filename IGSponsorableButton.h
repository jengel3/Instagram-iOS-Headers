
@class IGFeedItem;


@protocol IGSponsorableButton
@property (assign,nonatomic) char showIcon; 
@property (nonatomic,retain) IGFeedItem * feedItem; 
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate; 
@required
-(void)setFeedItem:(id)arg1;
-(IGFeedItem *)feedItem;
-(void)setLoggingDelegate:(id)arg1;
-(void)setColor:(id)arg1 forState:(unsigned)arg2;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(char)showIcon;
-(void)setShowIcon:(char)arg1;

@end

