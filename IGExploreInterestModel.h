

@class NSString, NSMutableSet, NSArray;

@interface IGExploreInterestModel : NSObject {

	char _moreAvailable;
	char _isCollapsed;
	NSString* _title;
	NSString* _subtitle;
	NSMutableSet* _selectedIndices;
	NSArray* _topics;
	NSArray* _allTopicNames;
	int _collapsedTopicCount;

}

@property (nonatomic,readonly) NSArray * topics;                            //@synthesize topics=_topics - In the implementation block
@property (nonatomic,retain) NSArray * allTopicNames;                       //@synthesize allTopicNames=_allTopicNames - In the implementation block
@property (nonatomic,readonly) int collapsedTopicCount;                     //@synthesize collapsedTopicCount=_collapsedTopicCount - In the implementation block
@property (nonatomic,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                         //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSMutableSet * selectedIndices;              //@synthesize selectedIndices=_selectedIndices - In the implementation block
@property (nonatomic,readonly) char moreAvailable;                          //@synthesize moreAvailable=_moreAvailable - In the implementation block
@property (assign,nonatomic) char isCollapsed;                              //@synthesize isCollapsed=_isCollapsed - In the implementation block
@property (nonatomic,readonly) NSArray * visibleTopicNames; 
@property (nonatomic,readonly) NSArray * selectedTopicIDs; 
-(NSArray *)selectedTopicIDs;
-(id)parseTopicFromResponse:(id)arg1 ;
-(NSArray *)allTopicNames;
-(void)updateMoreTopicsWithDictionary:(id)arg1 ;
-(void)setIsCollapsed:(char)arg1 ;
-(void)setAllTopicNames:(NSArray *)arg1 ;
-(int)collapsedTopicCount;
-(NSArray *)visibleTopicNames;
-(NSMutableSet *)selectedIndices;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(char)isCollapsed;
-(char)moreAvailable;
-(NSArray *)topics;
@end

