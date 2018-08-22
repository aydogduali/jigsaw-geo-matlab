    
    /*
    --------------------------------------------------------
     * MESH-ALCHEMY-2: transform 2-dim. mesh cell types.
    --------------------------------------------------------
     *
     * This program may be freely redistributed under the 
     * condition that the copyright notices (including this 
     * entire header) are not removed, and no compensation 
     * is received through use of the software.  Private, 
     * research, and institutional use is free.  You may 
     * distribute modified versions of this code UNDER THE 
     * CONDITION THAT THIS CODE AND ANY MODIFICATIONS MADE 
     * TO IT IN THE SAME FILE REMAIN UNDER COPYRIGHT OF THE 
     * ORIGINAL AUTHOR, BOTH SOURCE AND OBJECT CODE ARE 
     * MADE FREELY AVAILABLE WITHOUT CHARGE, AND CLEAR 
     * NOTICE IS GIVEN OF THE MODIFICATIONS.  Distribution 
     * of this code as part of a commercial system is 
     * permissible ONLY BY DIRECT ARRANGEMENT WITH THE 
     * AUTHOR.  (If you are not directly supplying this 
     * code to a customer, and you are instead telling them 
     * how they can obtain it for free, then you are not 
     * required to make any arrangement with me.) 
     *
     * Disclaimer:  Neither I nor: Columbia University, The
     * Massachusetts Institute of Technology, The 
     * University of Sydney, nor The National Aeronautics
     * and Space Administration warrant this code in any 
     * way whatsoever.  This code is provided "as-is" to be 
     * used at your own risk.
     *
    --------------------------------------------------------
     *
     * Last updated: 20 August, 2018
     *
     * Copyright 2013-2018
     * Darren Engwirda
     * de2363@columbia.edu
     * https://github.com/dengwirda/
     *
    --------------------------------------------------------
     */
     
     
    template <
    typename T
             >
    class pair_mesh_2
    {
    public  :
    typedef  T                          tria_type ;

    typedef typename 
            tria_type::real_type        real_type ;
    typedef typename 
            tria_type::iptr_type        iptr_type ;


    __static_call
    __normal_call void_type pair_mesh (
        tria_type &_tria
        )
    {
    
        // match_graph<>
    
        for (auto _epos  = _tria._set2.head() ;
                  _epos != _tria._set2.tend() ;
                ++_epos  )
        {
            if (_epos->mark() >= +0)
            {
                _tset.set_count(0);
                _mesh.edge_tri3(
                   &_epos->node(0), _tset) ;
    
                if (_tset.count() == +2)
                {
                    
              //form_quad
                 
                }   
            }
        }
        
        
        // match graph
    
    
    }
    
    } ;
    
    
    
