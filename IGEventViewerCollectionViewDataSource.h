
#import <UIKit/UICollectionViewDataSource.h>

@protocol IGEventViewerCollectionViewDataSourceDelegate;
@class NSArray, NSString;

@interface IGEventViewerCollectionViewDataSource : NSObject <UICollectionViewDataSource> {

	id<IGEventViewerCollectionViewDataSourceDelegate> _delegate;
	NSArray* _posts;

}

@property (assign,nonatomic,__weak) id<IGEventViewerCollectionViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * posts;                                                                  //@synthesize posts=_posts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)posts;
-(id)initWithPosts:(id)arg1 ;
-(void)setPosts:(NSArray *)arg1 ;
-(id)cellIdForPostMediaType:(int)arg1 ;
-(void)replacePostsWithPosts:(id)arg1 ;
-(void)setDelegate:(id<IGEventViewerCollectionViewDataSourceDelegate>)arg1 ;
-(id)init;
-(id<IGEventViewerCollectionViewDataSourceDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
@end

