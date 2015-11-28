

@class NSMutableArray;

@interface IGVisitedHashtagStore : NSObject {

	NSMutableArray* _visitedHashtags;

}

@property (nonatomic,retain) NSMutableArray * visitedHashtags;              //@synthesize visitedHashtags=_visitedHashtags - In the implementation block
+(id)sharedStore;
-(void)addVisitedHashtag:(id)arg1 ;
-(id)allVisitedHashtags;
-(NSMutableArray *)visitedHashtags;
-(void)setVisitedHashtags:(NSMutableArray *)arg1 ;
-(id)init;
@end

