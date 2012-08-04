//
//  TablaEnViewExistenteViewController.h
//  TablaEnViewExistente
//
//  Created by LSR Marketing Service on 3/08/12.
//  Copyright (c) 2012 LSR Marketing Service. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TablaEnViewExistenteViewController : UIViewController<UITableViewDataSource, UITableViewDelegate> {
    
}
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) id detailItem;
@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (strong, nonatomic) IBOutlet UIView *studentForm;
@property (strong, nonatomic) IBOutlet UIView *viewParentPortal;

@end
