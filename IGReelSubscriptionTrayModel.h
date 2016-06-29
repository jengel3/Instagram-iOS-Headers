
#import <Instagram/IGDKDiffable.h>

@class NSString, NSArray;

@interface IGReelSubscriptionTrayModel : NSObject <IGDKDiffable> {

	NSString* _diffIdentifier;
	NSArray* _reels;

}

@property (nonatomic,readonly) NSArray * reels;              //@synthesize reels=_reels - In the implementation block
-(id)diffIdentifier;
-(NSArray *)reels;
-(id)initWithReels:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isEmpty;
@end

