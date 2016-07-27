
#import <Instagram/IGDKDiffable.h>

@interface IGCommentLoadMore : NSObject <IGDKDiffable> {

	char _loading;

}

@property (assign,getter=isLoading,nonatomic) char loading;              //@synthesize loading=_loading - In the implementation block
-(id)diffIdentifier;
-(id)initWithLoading:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
@end

