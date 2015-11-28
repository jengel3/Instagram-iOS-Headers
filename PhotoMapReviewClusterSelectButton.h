
#import <UIKit/UIButton.h>

@class IGQuadtreeCluster, IGPhotoMapEditManager;

@interface PhotoMapReviewClusterSelectButton : UIButton {

	IGQuadtreeCluster* _cluster;
	IGPhotoMapEditManager* _editManager;

}

@property (nonatomic,retain) IGQuadtreeCluster * cluster;                      //@synthesize cluster=_cluster - In the implementation block
@property (nonatomic,retain) IGPhotoMapEditManager * editManager;              //@synthesize editManager=_editManager - In the implementation block
+(id)buttonWithType:(int)arg1 cluster:(id)arg2 editManager:(id)arg3 ;
-(IGPhotoMapEditManager *)editManager;
-(void)setEditManager:(IGPhotoMapEditManager *)arg1 ;
-(void)onClusterSelectionChanged;
-(void)dealloc;
-(void)setCluster:(IGQuadtreeCluster *)arg1 ;
-(IGQuadtreeCluster *)cluster;
@end

