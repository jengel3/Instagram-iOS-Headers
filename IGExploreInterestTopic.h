

@class NSString;

@interface IGExploreInterestTopic : NSObject {

	NSString* _topicID;
	NSString* _topicName;

}

@property (nonatomic,readonly) NSString * topicID;                //@synthesize topicID=_topicID - In the implementation block
@property (nonatomic,readonly) NSString * topicName;              //@synthesize topicName=_topicName - In the implementation block
-(id)initWithTopicID:(id)arg1 topicName:(id)arg2 ;
-(NSString *)topicID;
-(NSString *)topicName;
@end

