
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFindUsersViewDataSource.h>

@class NSArray;

@interface IGClusterBrowsingSuggestedUsersViewDataSource : IGFindUsersViewDataSource {

	NSArray* _parameters;
	CGSize _thumbnailSize;

}

@property (assign,nonatomic) CGSize thumbnailSize;              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,retain) NSArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(void)fetchList;
-(void)fetchMore;
-(id)requestWithMaxId:(id)arg1 ;
-(id)initWithThumbnailSize:(CGSize)arg1 ;
-(id)parseListResponse:(id)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(CGSize)thumbnailSize;
@end

