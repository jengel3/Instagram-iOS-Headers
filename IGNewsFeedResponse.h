
#import <Instagram/IGLoadMoreResponseType.h>

@class NSOrderedSet, NSString;

@interface IGNewsFeedResponse : NSObject <IGLoadMoreResponseType> {

	NSOrderedSet* _stories;
	NSString* _maxId;

}

@property (nonatomic,copy,readonly) NSOrderedSet * stories;              //@synthesize stories=_stories - In the implementation block
@property (nonatomic,copy,readonly) NSString * maxId;                    //@synthesize maxId=_maxId - In the implementation block
-(NSString *)maxId;
-(NSOrderedSet *)stories;
-(id)initWithStories:(id)arg1 maxId:(id)arg2 ;
@end

