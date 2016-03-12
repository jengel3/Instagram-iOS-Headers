
#import <Instagram/IGDKDiffable.h>

@class IGFeedItem, NSString;

@interface IGMediaThumbnailModel : NSObject <IGDKDiffable> {

	IGFeedItem* _post;

}

@property (nonatomic,readonly) IGFeedItem * post;                   //@synthesize post=_post - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)post;
-(id)diffIdentifier;
-(id)initWithPost:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
@end

