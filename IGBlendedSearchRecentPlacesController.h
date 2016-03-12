
#import <Instagram/IGBlendedSearchRecentItemController.h>

@class NSString;

@interface IGBlendedSearchRecentPlacesController : NSObject <IGBlendedSearchRecentItemController>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recentPlaces;
-(char)canHandleItem:(id)arg1 ;
-(id)restoreItemUsingIdentifier:(id)arg1 ;
-(id)identifierForItem:(id)arg1 ;
-(id)itemType;
@end

