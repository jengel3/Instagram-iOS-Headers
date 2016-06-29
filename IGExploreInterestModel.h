

@class NSString, NSArray;

@interface IGExploreInterestModel : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSArray* _topics;

}

@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSArray * topics;                 //@synthesize topics=_topics - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSArray *)topics;
@end

