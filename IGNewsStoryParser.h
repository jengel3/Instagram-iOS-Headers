
#import <Instagram/IGNetworkParser.h>

@class NSString;

@interface IGNewsStoryParser : NSObject <IGNetworkParser>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storiesWithDictionaries:(id)arg1 ;
-(id)parsedObjectFromResponse:(id)arg1 ;
@end

