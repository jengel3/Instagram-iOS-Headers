
#import <Instagram/IGDKDiffable.h>

@class NSString;

@interface IGDirectPendingInboxNuxViewModel : NSObject <IGDKDiffable> {

	NSString* _nuxString;
	float _cellHeight;

}

@property (nonatomic,readonly) NSString * nuxString;              //@synthesize nuxString=_nuxString - In the implementation block
@property (nonatomic,readonly) float cellHeight;                  //@synthesize cellHeight=_cellHeight - In the implementation block
-(id)diffIdentifier;
-(NSString *)nuxString;
-(float)cellHeight;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
@end

