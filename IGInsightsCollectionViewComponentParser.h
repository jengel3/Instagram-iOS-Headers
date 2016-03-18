
#import <Instagram/IGInsightsComponentParser.h>

@class NSString;

@interface IGInsightsCollectionViewComponentParser : NSObject <IGInsightsComponentParser>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getMediasFromItem:(id)arg1 ;
-(id)componentForItemData:(id)arg1 ;
-(id)getPageInfoFromItem:(id)arg1 ;
@end

