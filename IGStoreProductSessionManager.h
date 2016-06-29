

@class NSMutableDictionary;

@interface IGStoreProductSessionManager : NSObject {

	NSMutableDictionary* _storeProductSessions;

}

@property (nonatomic,retain) NSMutableDictionary * storeProductSessions;              //@synthesize storeProductSessions=_storeProductSessions - In the implementation block
-(char)canHaveSessionForFeedItem:(id)arg1 ;
-(id)sessionForFeedItem:(id)arg1 ;
-(NSMutableDictionary *)storeProductSessions;
-(void)prepareSessionForFeedItem:(id)arg1 ;
-(void)removeSessionForFeedItem:(id)arg1 ;
-(void)setStoreProductSessions:(NSMutableDictionary *)arg1 ;
@end

