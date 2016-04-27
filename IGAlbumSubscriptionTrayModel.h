
#import <Instagram/IGDKDiffable.h>

@class NSArray, IGFeedItem;

@interface IGAlbumSubscriptionTrayModel : NSObject <IGDKDiffable> {

	NSArray* _items;
	IGFeedItem* _currentAlbum;

}

@property (nonatomic,readonly) NSArray * items;                        //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) IGFeedItem * currentAlbum;              //@synthesize currentAlbum=_currentAlbum - In the implementation block
-(id)diffIdentifier;
-(IGFeedItem *)currentAlbum;
-(id)initWithItems:(id)arg1 currentAlbum:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isEmpty;
-(NSArray *)items;
@end

