
#import <Instagram/IGDKDiffable.h>

@class NSString;

@interface IGTailLoadingItem : NSObject <IGDKDiffable>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diffIdentifier;
@end

