
#import <Instagram/IGDKDiffable.h>

@class NSArray;

@interface IGAlbumFeedModel : NSObject <IGDKDiffable> {

	NSArray* _feedItems;

}

@property (nonatomic,copy,readonly) NSArray * feedItems;              //@synthesize feedItems=_feedItems - In the implementation block
-(id)diffIdentifier;
-(id)initWithFeedItems:(id)arg1 ;
-(NSArray *)feedItems;
@end

