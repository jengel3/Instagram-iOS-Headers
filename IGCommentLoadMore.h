
#import <Instagram/IGDKDiffable.h>

@class NSString;

@interface IGCommentLoadMore : NSObject <IGDKDiffable> {

	char _loading;

}

@property (assign,getter=isLoading,nonatomic) char loading;              //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diffIdentifier;
-(id)initWithLoading:(char)arg1 ;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
@end

