
@class IGFeedItem, IGActionSheetConfiguration;


@protocol IGSponsorableButton
@property (assign,nonatomic) char showIcon; 
@property (nonatomic,retain) IGFeedItem * feedItem; 
@property (nonatomic,retain) IGActionSheetConfiguration * actionSheetConfiguration; 
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingDelegate; 
@required
-(IGFeedItem *)feedItem;
-(void)setLoggingDelegate:(id)arg1;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(IGActionSheetConfiguration *)actionSheetConfiguration;
-(void)setColor:(id)arg1 forState:(unsigned)arg2;
-(void)setActionSheetConfiguration:(id)arg1;
-(void)setFeedItem:(id)arg1;
-(char)showIcon;
-(void)setShowIcon:(char)arg1;

@end

