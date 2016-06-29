
#import <Instagram/IGDKDiffable.h>

@class NSString;

@interface IGCommentLoadMore : NSObject <IGDKDiffable> {

	char _loading;
	NSString* _titleForHeaderView;

}

@property (assign,getter=isLoading,nonatomic) char loading;              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSString * titleForHeaderView;              //@synthesize titleForHeaderView=_titleForHeaderView - In the implementation block
-(id)diffIdentifier;
-(id)initWithLoading:(char)arg1 ;
-(NSString *)titleForHeaderView;
-(void)setTitleForHeaderView:(NSString *)arg1 ;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
@end

