
#import <Instagram/IGDKDiffable.h>

@class NSArray;

@interface IGAlbumSubscriptionTrayModel : NSObject <IGDKDiffable> {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(id)diffIdentifier;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
@end

