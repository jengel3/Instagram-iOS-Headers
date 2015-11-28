

@class NSString, NSOrderedSet;

@interface IGNewsDataSourceSection : NSObject {

	NSString* _title;
	NSOrderedSet* _stories;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSOrderedSet * stories;              //@synthesize stories=_stories - In the implementation block
+(id)sectionWithTitle:(id)arg1 stories:(id)arg2 ;
-(NSOrderedSet *)stories;
-(void)setStories:(NSOrderedSet *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

