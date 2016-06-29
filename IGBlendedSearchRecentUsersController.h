
#import <Instagram/IGBlendedSearchRecentItemController.h>

@class NSString;

@interface IGBlendedSearchRecentUsersController : NSObject <IGBlendedSearchRecentItemController>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)recentUsers;
-(id)restoreItemUsingIdentifier:(id)arg1 ;
-(id)identifierForItem:(id)arg1 ;
-(char)canHandleItem:(id)arg1 ;
-(id)itemType;
@end

