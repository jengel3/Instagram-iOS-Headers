
#import <Instagram/IGBlendedSearchRecentItemController.h>

@class NSString;

@interface IGBlendedSearchRecentHashtagController : NSObject <IGBlendedSearchRecentItemController>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canHandleItem:(id)arg1 ;
-(id)restoreItemUsingIdentifier:(id)arg1 ;
-(id)identifierForItem:(id)arg1 ;
-(id)itemType;
@end

