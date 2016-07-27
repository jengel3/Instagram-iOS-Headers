
#import <Instagram/IGDKDiffable.h>

@class IGNewsStory, NSString;

@interface IGActivityStoryItemConfiguration : NSObject <IGDKDiffable> {

	IGNewsStory* _newsStory;
	NSString* _sectionTitle;

}

@property (nonatomic,readonly) IGNewsStory * newsStory;              //@synthesize newsStory=_newsStory - In the implementation block
@property (nonatomic,readonly) NSString * sectionTitle;              //@synthesize sectionTitle=_sectionTitle - In the implementation block
-(id)diffIdentifier;
-(id)initWithStory:(id)arg1 sectionTitle:(id)arg2 ;
-(IGNewsStory *)newsStory;
-(NSString *)sectionTitle;
@end

