

@class NSMutableDictionary;

@interface IGFeedItemViewingSessionManager : NSObject {

	NSMutableDictionary* _sessions;

}

@property (nonatomic,retain) NSMutableDictionary * sessions;              //@synthesize sessions=_sessions - In the implementation block
-(id)sessionForFeedItem:(id)arg1 ;
-(id)keyForFeedItem:(id)arg1 ;
-(NSMutableDictionary *)sessions;
-(void)removeSessionForFeedItemsInArray:(id)arg1 ;
-(void)setSessions:(NSMutableDictionary *)arg1 ;
@end

