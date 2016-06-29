

@protocol IGTranslationNetworkDataSourceDelegate;
@class NSString, IGFeedItem, IGRequest;

@interface IGTranslationNetworkDataSource : NSObject {

	char _loading;
	id<IGTranslationNetworkDataSourceDelegate> _delegate;
	NSString* _currentPK;
	int _currentType;
	IGFeedItem* _feedItem;
	IGRequest* _currentRequest;

}

@property (assign,nonatomic) char loading;                                                            //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) IGRequest * currentRequest;                                              //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,copy) NSString * currentPK;                                                      //@synthesize currentPK=_currentPK - In the implementation block
@property (assign,nonatomic) int currentType;                                                         //@synthesize currentType=_currentType - In the implementation block
@property (assign,nonatomic,__weak) id<IGTranslationNetworkDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                   //@synthesize feedItem=_feedItem - In the implementation block
-(IGFeedItem *)feedItem;
-(void)loadTranslationForFeedItem:(id)arg1 ;
-(void)setCurrentPK:(NSString *)arg1 ;
-(void)setCurrentType:(int)arg1 ;
-(int)currentType;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)loadTranslationForPK:(id)arg1 contentType:(int)arg2 ;
-(NSString *)currentPK;
-(void)setCurrentRequest:(IGRequest *)arg1 ;
-(void)setDelegate:(id<IGTranslationNetworkDataSourceDelegate>)arg1 ;
-(id<IGTranslationNetworkDataSourceDelegate>)delegate;
-(IGRequest *)currentRequest;
-(void)setLoading:(char)arg1 ;
-(char)loading;
@end

