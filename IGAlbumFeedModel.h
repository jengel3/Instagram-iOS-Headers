
#import <Instagram/IGDKDiffable.h>

@class NSArray, NSString;

@interface IGAlbumFeedModel : NSObject <IGDKDiffable> {

	NSArray* _feedItems;
	NSString* _diffIdentifier;

}

@property (nonatomic,retain) NSString * diffIdentifier;               //@synthesize diffIdentifier=_diffIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * feedItems;              //@synthesize feedItems=_feedItems - In the implementation block
-(NSString *)diffIdentifier;
-(id)initWithFeedItems:(id)arg1 ;
-(NSArray *)feedItems;
-(void)setDiffIdentifier:(NSString *)arg1 ;
@end

